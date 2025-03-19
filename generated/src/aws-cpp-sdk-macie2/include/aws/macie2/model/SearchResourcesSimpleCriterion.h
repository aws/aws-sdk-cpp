/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SearchResourcesComparator.h>
#include <aws/macie2/model/SearchResourcesSimpleCriterionKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a property-based filter condition that determines which Amazon Web
   * Services resources are included or excluded from the query
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesSimpleCriterion">AWS
   * API Reference</a></p>
   */
  class SearchResourcesSimpleCriterion
  {
  public:
    AWS_MACIE2_API SearchResourcesSimpleCriterion() = default;
    AWS_MACIE2_API SearchResourcesSimpleCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesSimpleCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SearchResourcesComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(SearchResourcesComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline SearchResourcesSimpleCriterion& WithComparator(SearchResourcesComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property to use in the condition.</p>
     */
    inline SearchResourcesSimpleCriterionKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(SearchResourcesSimpleCriterionKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline SearchResourcesSimpleCriterion& WithKey(SearchResourcesSimpleCriterionKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists one or more values to use in the condition. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values. Valid
     * values for each supported property (key) are:</p> <ul><li><p>ACCOUNT_ID - A
     * string that represents the unique identifier for the Amazon Web Services account
     * that owns the resource.</p></li> <li><p>AUTOMATED_DISCOVERY_MONITORING_STATUS -
     * A string that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-automateddiscoverymonitoringstatus">BucketMetadata.automatedDiscoveryMonitoringStatus</a>
     * property of an S3 bucket.</p></li> <li><p>S3_BUCKET_EFFECTIVE_PERMISSION - A
     * string that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketpublicaccess-effectivepermission">BucketPublicAccess.effectivePermission</a>
     * property of an S3 bucket.</p></li> <li><p>S3_BUCKET_NAME - A string that
     * represents the name of an S3 bucket.</p></li> <li><p>S3_BUCKET_SHARED_ACCESS - A
     * string that represents an enumerated value that Macie defines for the <a
     * href="https://docs.aws.amazon.com/macie/latest/APIReference/datasources-s3.html#datasources-s3-prop-bucketmetadata-sharedaccess">BucketMetadata.sharedAccess</a>
     * property of an S3 bucket.</p></li></ul> <p>Values are case sensitive. Also,
     * Macie doesn't support use of partial values or wildcard characters in
     * values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SearchResourcesSimpleCriterion& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SearchResourcesSimpleCriterion& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    SearchResourcesComparator m_comparator{SearchResourcesComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    SearchResourcesSimpleCriterionKey m_key{SearchResourcesSimpleCriterionKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
