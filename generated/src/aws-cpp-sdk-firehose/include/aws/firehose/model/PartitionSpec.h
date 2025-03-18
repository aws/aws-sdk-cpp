/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/PartitionField.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Represents how to produce partition data for a table. Partition data is
   * produced by transforming columns in a table. Each column transform is
   * represented by a named <code>PartitionField</code>. </p> <p>Here is an example
   * of the schema in JSON. </p> <p> <code>"partitionSpec": { "identity": [
   * {"sourceName": "column1"}, {"sourceName": "column2"}, {"sourceName": "column3"}
   * ] }</code> </p> <p>Amazon Data Firehose is in preview release and is subject to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/PartitionSpec">AWS
   * API Reference</a></p>
   */
  class PartitionSpec
  {
  public:
    AWS_FIREHOSE_API PartitionSpec() = default;
    AWS_FIREHOSE_API PartitionSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API PartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> List of identity <a
     * href="https://iceberg.apache.org/spec/#partition-transforms">transforms</a> that
     * performs an identity transformation. The transform takes the source value, and
     * does not modify it. Result type is the source type.</p> <p>Amazon Data Firehose
     * is in preview release and is subject to change.</p>
     */
    inline const Aws::Vector<PartitionField>& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::Vector<PartitionField>>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::Vector<PartitionField>>
    PartitionSpec& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    template<typename IdentityT = PartitionField>
    PartitionSpec& AddIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity.emplace_back(std::forward<IdentityT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PartitionField> m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
