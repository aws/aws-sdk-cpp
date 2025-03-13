/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>A key-value pair. A tag consists of a tag key and a tag value. Tag keys and
   * tag values are both required, but tag values can be empty (null) strings.</p>
   *  <p>Do not include confidential or sensitive information in this
   * field. This field may be displayed in plaintext in CloudTrail logs and other
   * output.</p>  <p>For information about the rules that apply to tag
   * keys and tag values, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
   * Tag Restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_KMS_API Tag() = default;
    AWS_KMS_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the tag.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    Tag& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the tag.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    Tag& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
