/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The summary of the properties of a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/SnapshotSummary">AWS
   * API Reference</a></p>
   */
  class SnapshotSummary
  {
  public:
    AWS_GAMESPARKS_API SnapshotSummary();
    AWS_GAMESPARKS_API SnapshotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API SnapshotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline SnapshotSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline SnapshotSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The description of the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline SnapshotSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline SnapshotSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline SnapshotSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline SnapshotSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline SnapshotSummary& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>Then timestamp of when the snapshot was last updated.</p>
     */
    inline SnapshotSummary& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
