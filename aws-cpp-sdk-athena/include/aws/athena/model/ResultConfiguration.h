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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{

  /**
   * <p>The location in Amazon S3 where query results are stored and the encryption
   * option, if any, used for query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ResultConfiguration
  {
  public:
    ResultConfiguration();
    ResultConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    ResultConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline ResultConfiguration& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline ResultConfiguration& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The location in S3 where query results are stored.</p>
     */
    inline ResultConfiguration& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>If query results are encrypted in S3, indicates the S3 encryption option used
     * (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code> and key
     * information.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>If query results are encrypted in S3, indicates the S3 encryption option used
     * (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code> and key
     * information.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>If query results are encrypted in S3, indicates the S3 encryption option used
     * (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code> and key
     * information.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>If query results are encrypted in S3, indicates the S3 encryption option used
     * (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code> and key
     * information.</p>
     */
    inline ResultConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>If query results are encrypted in S3, indicates the S3 encryption option used
     * (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code> and key
     * information.</p>
     */
    inline ResultConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
