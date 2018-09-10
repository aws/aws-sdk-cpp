﻿/*
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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmafEncryptionType.h>
#include <aws/mediaconvert/model/CmafInitializationVectorInManifest.h>
#include <aws/mediaconvert/model/StaticKeyProvider.h>
#include <aws/mediaconvert/model/CmafKeyProviderType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for CMAF encryption<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CmafEncryptionSettings
  {
  public:
    CmafEncryptionSettings();
    CmafEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    CmafEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline CmafEncryptionSettings& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline CmafEncryptionSettings& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline CmafEncryptionSettings& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    
    inline const CmafEncryptionType& GetEncryptionMethod() const{ return m_encryptionMethod; }

    
    inline void SetEncryptionMethod(const CmafEncryptionType& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    
    inline void SetEncryptionMethod(CmafEncryptionType&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    
    inline CmafEncryptionSettings& WithEncryptionMethod(const CmafEncryptionType& value) { SetEncryptionMethod(value); return *this;}

    
    inline CmafEncryptionSettings& WithEncryptionMethod(CmafEncryptionType&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    
    inline const CmafInitializationVectorInManifest& GetInitializationVectorInManifest() const{ return m_initializationVectorInManifest; }

    
    inline void SetInitializationVectorInManifest(const CmafInitializationVectorInManifest& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = value; }

    
    inline void SetInitializationVectorInManifest(CmafInitializationVectorInManifest&& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = std::move(value); }

    
    inline CmafEncryptionSettings& WithInitializationVectorInManifest(const CmafInitializationVectorInManifest& value) { SetInitializationVectorInManifest(value); return *this;}

    
    inline CmafEncryptionSettings& WithInitializationVectorInManifest(CmafInitializationVectorInManifest&& value) { SetInitializationVectorInManifest(std::move(value)); return *this;}


    
    inline const StaticKeyProvider& GetStaticKeyProvider() const{ return m_staticKeyProvider; }

    
    inline void SetStaticKeyProvider(const StaticKeyProvider& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = value; }

    
    inline void SetStaticKeyProvider(StaticKeyProvider&& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = std::move(value); }

    
    inline CmafEncryptionSettings& WithStaticKeyProvider(const StaticKeyProvider& value) { SetStaticKeyProvider(value); return *this;}

    
    inline CmafEncryptionSettings& WithStaticKeyProvider(StaticKeyProvider&& value) { SetStaticKeyProvider(std::move(value)); return *this;}


    
    inline const CmafKeyProviderType& GetType() const{ return m_type; }

    
    inline void SetType(const CmafKeyProviderType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(CmafKeyProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline CmafEncryptionSettings& WithType(const CmafKeyProviderType& value) { SetType(value); return *this;}

    
    inline CmafEncryptionSettings& WithType(CmafKeyProviderType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet;

    CmafEncryptionType m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet;

    CmafInitializationVectorInManifest m_initializationVectorInManifest;
    bool m_initializationVectorInManifestHasBeenSet;

    StaticKeyProvider m_staticKeyProvider;
    bool m_staticKeyProviderHasBeenSet;

    CmafKeyProviderType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
