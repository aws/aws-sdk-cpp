/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>A container for facet information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Bucket">AWS
   * API Reference</a></p>
   */
  class Bucket
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API Bucket() = default;
    AWS_CLOUDSEARCHDOMAIN_API Bucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Bucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The facet value being counted.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Bucket& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hits that contain the facet value in the specified facet
     * field.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Bucket& WithCount(long long value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
