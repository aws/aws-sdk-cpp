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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/MergeStrategy.h>
#include <aws/translate/model/TerminologyData.h>
#include <aws/translate/model/EncryptionKey.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API ImportTerminologyRequest : public TranslateRequest
  {
  public:
    ImportTerminologyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportTerminology"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }

    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }

    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }

    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = std::move(value); }

    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline ImportTerminologyRequest& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}

    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline ImportTerminologyRequest& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}


    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline const TerminologyData& GetTerminologyData() const{ return m_terminologyData; }

    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline bool TerminologyDataHasBeenSet() const { return m_terminologyDataHasBeenSet; }

    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline void SetTerminologyData(const TerminologyData& value) { m_terminologyDataHasBeenSet = true; m_terminologyData = value; }

    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline void SetTerminologyData(TerminologyData&& value) { m_terminologyDataHasBeenSet = true; m_terminologyData = std::move(value); }

    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithTerminologyData(const TerminologyData& value) { SetTerminologyData(value); return *this;}

    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithTerminologyData(TerminologyData&& value) { SetTerminologyData(std::move(value)); return *this;}


    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline ImportTerminologyRequest& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    MergeStrategy m_mergeStrategy;
    bool m_mergeStrategyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    TerminologyData m_terminologyData;
    bool m_terminologyDataHasBeenSet;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
