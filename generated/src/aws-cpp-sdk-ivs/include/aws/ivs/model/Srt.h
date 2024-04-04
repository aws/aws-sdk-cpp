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
    AWS_IVS_API Srt();
    AWS_IVS_API Srt(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Srt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline Srt& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline Srt& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to be used when streaming with IVS using the SRT protocol.</p>
     */
    inline Srt& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline const Aws::String& GetPassphrase() const{ return m_passphrase; }

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline bool PassphraseHasBeenSet() const { return m_passphraseHasBeenSet; }

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline void SetPassphrase(const Aws::String& value) { m_passphraseHasBeenSet = true; m_passphrase = value; }

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline void SetPassphrase(Aws::String&& value) { m_passphraseHasBeenSet = true; m_passphrase = std::move(value); }

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline void SetPassphrase(const char* value) { m_passphraseHasBeenSet = true; m_passphrase.assign(value); }

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline Srt& WithPassphrase(const Aws::String& value) { SetPassphrase(value); return *this;}

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline Srt& WithPassphrase(Aws::String&& value) { SetPassphrase(std::move(value)); return *this;}

    /**
     * <p>Auto-generated passphrase to enable encryption. This field is applicable only
     * if the end user has <i>not</i> enabled the <code>insecureIngest</code> option
     * for the channel.</p>
     */
    inline Srt& WithPassphrase(const char* value) { SetPassphrase(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_passphrase;
    bool m_passphraseHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
