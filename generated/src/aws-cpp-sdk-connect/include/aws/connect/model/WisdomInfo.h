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
   * <p>Information about Amazon Connect Wisdom.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WisdomInfo">AWS
   * API Reference</a></p>
   */
  class WisdomInfo
  {
  public:
    AWS_CONNECT_API WisdomInfo();
    AWS_CONNECT_API WisdomInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API WisdomInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline WisdomInfo& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline WisdomInfo& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
     */
    inline WisdomInfo& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}

  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
