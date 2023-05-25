/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>An optional comment that describes the table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/Comment">AWS
   * API Reference</a></p>
   */
  class Comment
  {
  public:
    AWS_KEYSPACES_API Comment();
    AWS_KEYSPACES_API Comment(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An optional description of the table.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An optional description of the table.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An optional description of the table.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An optional description of the table.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An optional description of the table.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An optional description of the table.</p>
     */
    inline Comment& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An optional description of the table.</p>
     */
    inline Comment& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An optional description of the table.</p>
     */
    inline Comment& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
