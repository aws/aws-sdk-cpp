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
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/understanding-dns-in-amazon-lightsail">DNS
   * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/NameServersUpdateState">AWS
   * API Reference</a></p>
   */
  class NameServersUpdateState
  {
  public:
    AWS_LIGHTSAIL_API NameServersUpdateState() = default;
    AWS_LIGHTSAIL_API NameServersUpdateState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API NameServersUpdateState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the name servers update.</p> <p>Following are the
     * possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The name server
     * records were successfully updated.</p> </li> <li> <p> <code>PENDING</code> - The
     * name server record update is in progress.</p> </li> <li> <p> <code>FAILED</code>
     * - The name server record update failed.</p> </li> <li> <p> <code>STARTED</code>
     * - The automatic name server record update started.</p> </li> </ul>
     */
    inline NameServersUpdateStateCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(NameServersUpdateStateCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline NameServersUpdateState& WithCode(NameServersUpdateStateCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    NameServersUpdateState& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    NameServersUpdateStateCode m_code{NameServersUpdateStateCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
