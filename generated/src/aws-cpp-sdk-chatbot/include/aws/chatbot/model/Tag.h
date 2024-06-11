/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * A tag applied to the configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_CHATBOT_API Tag();
    AWS_CHATBOT_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The tag key.
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }
    inline Tag& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline Tag& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline Tag& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * The tag value.
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }
    inline Tag& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}
    inline Tag& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}
    inline Tag& WithTagValue(const char* value) { SetTagValue(value); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
