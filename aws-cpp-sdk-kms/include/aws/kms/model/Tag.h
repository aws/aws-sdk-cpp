/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>A key-value pair. A tag consists of a tag key and a tag value. Tag keys and
   * tag values are both required, but tag values can be empty (null)
   * strings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_KMS_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Json::JsonValue& jsonValue);
    Tag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key of the tag.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key of the tag.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key of the tag.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key of the tag.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key of the tag.</p>
     */
    inline Tag& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key of the tag.</p>
     */
    inline Tag& WithTagKey(Aws::String&& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key of the tag.</p>
     */
    inline Tag& WithTagKey(const char* value) { SetTagKey(value); return *this;}

    /**
     * <p>The value of the tag.</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }

    /**
     * <p>The value of the tag.</p>
     */
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The value of the tag.</p>
     */
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The value of the tag.</p>
     */
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }

    /**
     * <p>The value of the tag.</p>
     */
    inline Tag& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}

    /**
     * <p>The value of the tag.</p>
     */
    inline Tag& WithTagValue(Aws::String&& value) { SetTagValue(value); return *this;}

    /**
     * <p>The value of the tag.</p>
     */
    inline Tag& WithTagValue(const char* value) { SetTagValue(value); return *this;}

  private:
    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet;
    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
