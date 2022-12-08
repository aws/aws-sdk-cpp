/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NameServersUpdateStateCode.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the state of the name server records update made by Amazon
   * Lightsail to an Amazon Route 53 registered domain.</p> <p>For more information,
   * see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/understanding-dns-in-amazon-lightsail">DNS
   * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/NameServersUpdateState">AWS
   * API Reference</a></p>
   */
  class NameServersUpdateState
  {
  public:
    AWS_LIGHTSAIL_API NameServersUpdateState();
    AWS_LIGHTSAIL_API NameServersUpdateState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API NameServersUpdateState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline const NameServersUpdateStateCode& GetCode() const{ return m_code; }

    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline void SetCode(const NameServersUpdateStateCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline void SetCode(NameServersUpdateStateCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline NameServersUpdateState& WithCode(const NameServersUpdateStateCode& value) { SetCode(value); return *this;}

    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline NameServersUpdateState& WithCode(NameServersUpdateStateCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline NameServersUpdateState& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline NameServersUpdateState& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline NameServersUpdateState& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    NameServersUpdateStateCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
