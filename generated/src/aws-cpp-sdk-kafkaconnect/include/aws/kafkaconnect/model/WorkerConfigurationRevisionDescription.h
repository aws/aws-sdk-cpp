/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The description of the worker configuration revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerConfigurationRevisionDescription">AWS
   * API Reference</a></p>
   */
  class WorkerConfigurationRevisionDescription
  {
  public:
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription();
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline const Aws::String& GetPropertiesFileContent() const{ return m_propertiesFileContent; }

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline bool PropertiesFileContentHasBeenSet() const { return m_propertiesFileContentHasBeenSet; }

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(const Aws::String& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = value; }

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(Aws::String&& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = std::move(value); }

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(const char* value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent.assign(value); }

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithPropertiesFileContent(const Aws::String& value) { SetPropertiesFileContent(value); return *this;}

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithPropertiesFileContent(Aws::String&& value) { SetPropertiesFileContent(std::move(value)); return *this;}

    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithPropertiesFileContent(const char* value) { SetPropertiesFileContent(value); return *this;}


    /**
     * <p>The description of a revision of the worker configuration.</p>
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * <p>The description of a revision of the worker configuration.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The description of a revision of the worker configuration.</p>
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The description of a revision of the worker configuration.</p>
     */
    inline WorkerConfigurationRevisionDescription& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_propertiesFileContent;
    bool m_propertiesFileContentHasBeenSet = false;

    long long m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
