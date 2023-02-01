/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A leaf node condition which can be used to specify a tag condition, for
   * example, <code>HAVE BPO = 123</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagCondition">AWS
   * API Reference</a></p>
   */
  class TagCondition
  {
  public:
    AWS_CONNECT_API TagCondition();
    AWS_CONNECT_API TagCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TagCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline TagCondition& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline TagCondition& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The tag key in the tag condition.</p>
     */
    inline TagCondition& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline TagCondition& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline TagCondition& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}

    /**
     * <p>The tag value in the tag condition.</p>
     */
    inline TagCondition& WithTagValue(const char* value) { SetTagValue(value); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
