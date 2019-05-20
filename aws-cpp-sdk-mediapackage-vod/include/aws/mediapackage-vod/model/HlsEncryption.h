/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/EncryptionMethod.h>
#include <aws/mediapackage-vod/model/SpekeKeyProvider.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) encryption configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/HlsEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API HlsEncryption
  {
  public:
    HlsEncryption();
    HlsEncryption(Aws::Utils::Json::JsonView jsonValue);
    HlsEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The encryption method to use.
     */
    inline const EncryptionMethod& GetEncryptionMethod() const{ return m_encryptionMethod; }

    /**
     * The encryption method to use.
     */
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(const EncryptionMethod& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(EncryptionMethod&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(const EncryptionMethod& value) { SetEncryptionMethod(value); return *this;}

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(EncryptionMethod&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline HlsEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline HlsEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    EncryptionMethod m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
