/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>A <code>Call</code> instance for a SIP media application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SipMediaApplicationCall">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationCall
  {
  public:
    AWS_CHIME_API SipMediaApplicationCall();
    AWS_CHIME_API SipMediaApplicationCall(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SipMediaApplicationCall& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transaction ID of a call.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline SipMediaApplicationCall& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline SipMediaApplicationCall& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline SipMediaApplicationCall& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}
  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
