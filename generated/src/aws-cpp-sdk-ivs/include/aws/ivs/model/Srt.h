/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Specifies information needed to stream using the SRT protocol.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/Srt">AWS API
   * Reference</a></p>
   */
  class Srt
  {
  public:
    AWS_IVS_API Srt() = default;
    AWS_IVS_API Srt(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Srt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    Srt& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline const Aws::String& GetPassphrase() const { return m_passphrase; }
    inline bool PassphraseHasBeenSet() const { return m_passphraseHasBeenSet; }
    template<typename PassphraseT = Aws::String>
    void SetPassphrase(PassphraseT&& value) { m_passphraseHasBeenSet = true; m_passphrase = std::forward<PassphraseT>(value); }
    template<typename PassphraseT = Aws::String>
    Srt& WithPassphrase(PassphraseT&& value) { SetPassphrase(std::forward<PassphraseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_passphrase;
    bool m_passphraseHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
