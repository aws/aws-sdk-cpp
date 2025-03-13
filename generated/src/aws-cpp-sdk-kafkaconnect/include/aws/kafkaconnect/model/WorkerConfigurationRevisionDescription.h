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
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription() = default;
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationRevisionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    WorkerConfigurationRevisionDescription& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the worker configuration revision.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkerConfigurationRevisionDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Base64 encoded contents of the connect-distributed.properties file.</p>
     */
    inline const Aws::String& GetPropertiesFileContent() const { return m_propertiesFileContent; }
    inline bool PropertiesFileContentHasBeenSet() const { return m_propertiesFileContentHasBeenSet; }
    template<typename PropertiesFileContentT = Aws::String>
    void SetPropertiesFileContent(PropertiesFileContentT&& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = std::forward<PropertiesFileContentT>(value); }
    template<typename PropertiesFileContentT = Aws::String>
    WorkerConfigurationRevisionDescription& WithPropertiesFileContent(PropertiesFileContentT&& value) { SetPropertiesFileContent(std::forward<PropertiesFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a revision of the worker configuration.</p>
     */
    inline long long GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline WorkerConfigurationRevisionDescription& WithRevision(long long value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_propertiesFileContent;
    bool m_propertiesFileContentHasBeenSet = false;

    long long m_revision{0};
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
