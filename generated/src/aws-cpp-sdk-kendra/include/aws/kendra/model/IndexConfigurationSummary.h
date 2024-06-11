/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/IndexEdition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/IndexStatus.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information on the configuration of an index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/IndexConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class IndexConfigurationSummary
  {
  public:
    AWS_KENDRA_API IndexConfigurationSummary();
    AWS_KENDRA_API IndexConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API IndexConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IndexConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IndexConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IndexConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A identifier for the index. Use this to identify the index when you are using
     * APIs such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline IndexConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline IndexConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline IndexConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the index is a Enterprise Edition index or a Developer
     * Edition index. </p>
     */
    inline const IndexEdition& GetEdition() const{ return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(const IndexEdition& value) { m_editionHasBeenSet = true; m_edition = value; }
    inline void SetEdition(IndexEdition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }
    inline IndexConfigurationSummary& WithEdition(const IndexEdition& value) { SetEdition(value); return *this;}
    inline IndexConfigurationSummary& WithEdition(IndexEdition&& value) { SetEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline IndexConfigurationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline IndexConfigurationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline IndexConfigurationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline IndexConfigurationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline const IndexStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IndexStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IndexStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IndexConfigurationSummary& WithStatus(const IndexStatus& value) { SetStatus(value); return *this;}
    inline IndexConfigurationSummary& WithStatus(IndexStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IndexEdition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    IndexStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
