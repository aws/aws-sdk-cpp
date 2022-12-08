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
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary();
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format of the plugin file.</p>
     */
    inline const CustomPluginContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The format of the plugin file.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The format of the plugin file.</p>
     */
    inline void SetContentType(const CustomPluginContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The format of the plugin file.</p>
     */
    inline void SetContentType(CustomPluginContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The format of the plugin file.</p>
     */
    inline CustomPluginRevisionSummary& WithContentType(const CustomPluginContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The format of the plugin file.</p>
     */
    inline CustomPluginRevisionSummary& WithContentType(CustomPluginContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline CustomPluginRevisionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline CustomPluginRevisionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the custom plugin.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline const CustomPluginFileDescription& GetFileDescription() const{ return m_fileDescription; }

    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline bool FileDescriptionHasBeenSet() const { return m_fileDescriptionHasBeenSet; }

    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline void SetFileDescription(const CustomPluginFileDescription& value) { m_fileDescriptionHasBeenSet = true; m_fileDescription = value; }

    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline void SetFileDescription(CustomPluginFileDescription&& value) { m_fileDescriptionHasBeenSet = true; m_fileDescription = std::move(value); }

    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline CustomPluginRevisionSummary& WithFileDescription(const CustomPluginFileDescription& value) { SetFileDescription(value); return *this;}

    /**
     * <p>Details about the custom plugin file.</p>
     */
    inline CustomPluginRevisionSummary& WithFileDescription(CustomPluginFileDescription&& value) { SetFileDescription(std::move(value)); return *this;}


    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline const CustomPluginLocationDescription& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline void SetLocation(const CustomPluginLocationDescription& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline void SetLocation(CustomPluginLocationDescription&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithLocation(const CustomPluginLocationDescription& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithLocation(CustomPluginLocationDescription&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline CustomPluginRevisionSummary& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    CustomPluginContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomPluginFileDescription m_fileDescription;
    bool m_fileDescriptionHasBeenSet = false;

    CustomPluginLocationDescription m_location;
    bool m_locationHasBeenSet = false;

    long long m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
