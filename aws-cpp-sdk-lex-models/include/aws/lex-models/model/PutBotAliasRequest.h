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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API PutBotAliasRequest : public LexModelBuildingServiceRequest
  {
  public:
    PutBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBotAlias"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline PutBotAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline PutBotAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline PutBotAliasRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline PutBotAliasRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotAliasRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotAliasRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotAliasRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet;

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
