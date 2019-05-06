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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API CreateVoiceConnectorRequest : public ChimeRequest
  {
  public:
    CreateVoiceConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnector"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_requireEncryption;
    bool m_requireEncryptionHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
