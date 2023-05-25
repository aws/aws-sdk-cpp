/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a dashboard summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DashboardSummary">AWS
   * API Reference</a></p>
   */
  class DashboardSummary
  {
  public:
    AWS_IOTSITEWISE_API DashboardSummary();
    AWS_IOTSITEWISE_API DashboardSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DashboardSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DashboardSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DashboardSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DashboardSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the dashboard</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dashboard</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dashboard</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dashboard</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dashboard</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dashboard</p>
     */
    inline DashboardSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dashboard</p>
     */
    inline DashboardSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard</p>
     */
    inline DashboardSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The dashboard's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The dashboard's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The dashboard's description.</p>
     */
    inline DashboardSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The dashboard's description.</p>
     */
    inline DashboardSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The dashboard's description.</p>
     */
    inline DashboardSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline DashboardSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline DashboardSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline DashboardSummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline DashboardSummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
