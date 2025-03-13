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
    AWS_DIRECTCONNECT_API MacSecKey() = default;
    AWS_DIRECTCONNECT_API MacSecKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API MacSecKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key.</p>
     */
    inline const Aws::String& GetSecretARN() const { return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    template<typename SecretARNT = Aws::String>
    void SetSecretARN(SecretARNT&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::forward<SecretARNT>(value); }
    template<typename SecretARNT = Aws::String>
    MacSecKey& WithSecretARN(SecretARNT&& value) { SetSecretARN(std::forward<SecretARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connection Key Name (CKN) for the MAC Security secret key.</p>
     */
    inline const Aws::String& GetCkn() const { return m_ckn; }
    inline bool CknHasBeenSet() const { return m_cknHasBeenSet; }
    template<typename CknT = Aws::String>
    void SetCkn(CknT&& value) { m_cknHasBeenSet = true; m_ckn = std::forward<CknT>(value); }
    template<typename CknT = Aws::String>
    MacSecKey& WithCkn(CknT&& value) { SetCkn(std::forward<CknT>(value)); return *this;}
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
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    MacSecKey& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the MAC Security (MACsec) secret key takes effect. The value is
     * displayed in UTC format.</p>
     */
    inline const Aws::String& GetStartOn() const { return m_startOn; }
    inline bool StartOnHasBeenSet() const { return m_startOnHasBeenSet; }
    template<typename StartOnT = Aws::String>
    void SetStartOn(StartOnT&& value) { m_startOnHasBeenSet = true; m_startOn = std::forward<StartOnT>(value); }
    template<typename StartOnT = Aws::String>
    MacSecKey& WithStartOn(StartOnT&& value) { SetStartOn(std::forward<StartOnT>(value)); return *this;}
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
