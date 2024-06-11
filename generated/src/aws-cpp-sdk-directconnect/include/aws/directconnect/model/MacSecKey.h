/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about the MAC Security (MACsec) secret key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/MacSecKey">AWS
   * API Reference</a></p>
   */
  class MacSecKey
  {
  public:
    AWS_DIRECTCONNECT_API MacSecKey();
    AWS_DIRECTCONNECT_API MacSecKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API MacSecKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key.</p>
     */
    inline const Aws::String& GetSecretARN() const{ return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    inline void SetSecretARN(const Aws::String& value) { m_secretARNHasBeenSet = true; m_secretARN = value; }
    inline void SetSecretARN(Aws::String&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::move(value); }
    inline void SetSecretARN(const char* value) { m_secretARNHasBeenSet = true; m_secretARN.assign(value); }
    inline MacSecKey& WithSecretARN(const Aws::String& value) { SetSecretARN(value); return *this;}
    inline MacSecKey& WithSecretARN(Aws::String&& value) { SetSecretARN(std::move(value)); return *this;}
    inline MacSecKey& WithSecretARN(const char* value) { SetSecretARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connection Key Name (CKN) for the MAC Security secret key.</p>
     */
    inline const Aws::String& GetCkn() const{ return m_ckn; }
    inline bool CknHasBeenSet() const { return m_cknHasBeenSet; }
    inline void SetCkn(const Aws::String& value) { m_cknHasBeenSet = true; m_ckn = value; }
    inline void SetCkn(Aws::String&& value) { m_cknHasBeenSet = true; m_ckn = std::move(value); }
    inline void SetCkn(const char* value) { m_cknHasBeenSet = true; m_ckn.assign(value); }
    inline MacSecKey& WithCkn(const Aws::String& value) { SetCkn(value); return *this;}
    inline MacSecKey& WithCkn(Aws::String&& value) { SetCkn(std::move(value)); return *this;}
    inline MacSecKey& WithCkn(const char* value) { SetCkn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the MAC Security (MACsec) secret key.</p> <p>The possible values
     * are:</p> <ul> <li> <p> <code>associating</code>: The MAC Security (MACsec)
     * secret key is being validated and not yet associated with the connection or
     * LAG.</p> </li> <li> <p> <code>associated</code>: The MAC Security (MACsec)
     * secret key is validated and associated with the connection or LAG.</p> </li>
     * <li> <p> <code>disassociating</code>: The MAC Security (MACsec) secret key is
     * being disassociated from the connection or LAG</p> </li> <li> <p>
     * <code>disassociated</code>: The MAC Security (MACsec) secret key is no longer
     * associated with the connection or LAG.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline MacSecKey& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline MacSecKey& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline MacSecKey& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the MAC Security (MACsec) secret key takes effect. The value is
     * displayed in UTC format.</p>
     */
    inline const Aws::String& GetStartOn() const{ return m_startOn; }
    inline bool StartOnHasBeenSet() const { return m_startOnHasBeenSet; }
    inline void SetStartOn(const Aws::String& value) { m_startOnHasBeenSet = true; m_startOn = value; }
    inline void SetStartOn(Aws::String&& value) { m_startOnHasBeenSet = true; m_startOn = std::move(value); }
    inline void SetStartOn(const char* value) { m_startOnHasBeenSet = true; m_startOn.assign(value); }
    inline MacSecKey& WithStartOn(const Aws::String& value) { SetStartOn(value); return *this;}
    inline MacSecKey& WithStartOn(Aws::String&& value) { SetStartOn(std::move(value)); return *this;}
    inline MacSecKey& WithStartOn(const char* value) { SetStartOn(value); return *this;}
    ///@}
  private:

    Aws::String m_secretARN;
    bool m_secretARNHasBeenSet = false;

    Aws::String m_ckn;
    bool m_cknHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_startOn;
    bool m_startOnHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
