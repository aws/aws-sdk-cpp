﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataConfig.h>
#include <aws/translate/model/EncryptionKey.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API CreateParallelDataRequest : public TranslateRequest
  {
  public:
    CreateParallelDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateParallelData"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline CreateParallelDataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline CreateParallelDataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the parallel data resource in Amazon Translate. You must
     * assign a name that is unique in the account and region.</p>
     */
    inline CreateParallelDataRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline CreateParallelDataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline CreateParallelDataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description for the parallel data resource in Amazon Translate.</p>
     */
    inline CreateParallelDataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline const ParallelDataConfig& GetParallelDataConfig() const{ return m_parallelDataConfig; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline bool ParallelDataConfigHasBeenSet() const { return m_parallelDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(const ParallelDataConfig& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = value; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(ParallelDataConfig&& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline CreateParallelDataRequest& WithParallelDataConfig(const ParallelDataConfig& value) { SetParallelDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline CreateParallelDataRequest& WithParallelDataConfig(ParallelDataConfig&& value) { SetParallelDataConfig(std::move(value)); return *this;}


    
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    
    inline CreateParallelDataRequest& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    
    inline CreateParallelDataRequest& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline CreateParallelDataRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline CreateParallelDataRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. This token is automatically generated
     * when you use Amazon Translate through an AWS SDK.</p>
     */
    inline CreateParallelDataRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ParallelDataConfig m_parallelDataConfig;
    bool m_parallelDataConfigHasBeenSet;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
