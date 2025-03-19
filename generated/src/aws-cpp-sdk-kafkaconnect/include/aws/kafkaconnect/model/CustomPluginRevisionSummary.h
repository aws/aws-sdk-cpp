/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CustomPluginContentType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginFileDescription.h>
#include <aws/kafkaconnect/model/CustomPluginLocationDescription.h>
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
   * <p>Details about the revision of a custom plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginRevisionSummary">AWS
   * API Reference</a></p>
   */
  class CustomPluginRevisionSummary
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary() = default;
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the plugin file.</p>
     */
    inline CustomPluginContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(CustomPluginContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline CustomPluginRevisionSummary& WithContentType(CustomPluginContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CustomPluginRevisionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom plugin.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomPluginRevisionSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline const CustomPluginFileDescription& GetFileDescription() const { return m_fileDescription; }
    inline bool FileDescriptionHasBeenSet() const { return m_fileDescriptionHasBeenSet; }
    template<typename FileDescriptionT = CustomPluginFileDescription>
    void SetFileDescription(FileDescriptionT&& value) { m_fileDescriptionHasBeenSet = true; m_fileDescription = std::forward<FileDescriptionT>(value); }
    template<typename FileDescriptionT = CustomPluginFileDescription>
    CustomPluginRevisionSummary& WithFileDescription(FileDescriptionT&& value) { SetFileDescription(std::forward<FileDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline const CustomPluginLocationDescription& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = CustomPluginLocationDescription>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = CustomPluginLocationDescription>
    CustomPluginRevisionSummary& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline CustomPluginRevisionSummary& WithRevision(long long value) { SetRevision(value); return *this;}
    ///@}
  private:

    CustomPluginContentType m_contentType{CustomPluginContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomPluginFileDescription m_fileDescription;
    bool m_fileDescriptionHasBeenSet = false;

    CustomPluginLocationDescription m_location;
    bool m_locationHasBeenSet = false;

    long long m_revision{0};
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
