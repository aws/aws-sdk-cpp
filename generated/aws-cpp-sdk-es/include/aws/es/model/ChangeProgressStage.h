﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>A progress stage details of a specific domain configuration
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ChangeProgressStage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ChangeProgressStage
  {
  public:
    ChangeProgressStage();
    ChangeProgressStage(Aws::Utils::Json::JsonView jsonValue);
    ChangeProgressStage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline ChangeProgressStage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline ChangeProgressStage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the specific progress stage.</p>
     */
    inline ChangeProgressStage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline ChangeProgressStage& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline ChangeProgressStage& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The overall status of a specific progress stage.</p>
     */
    inline ChangeProgressStage& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The description of the progress stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the progress stage.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the progress stage.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the progress stage.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the progress stage.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the progress stage.</p>
     */
    inline ChangeProgressStage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the progress stage.</p>
     */
    inline ChangeProgressStage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the progress stage.</p>
     */
    inline ChangeProgressStage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline ChangeProgressStage& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The last updated timestamp of the progress stage.</p>
     */
    inline ChangeProgressStage& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
