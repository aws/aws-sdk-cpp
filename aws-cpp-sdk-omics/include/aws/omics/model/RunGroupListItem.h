/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A run group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunGroupListItem">AWS
   * API Reference</a></p>
   */
  class RunGroupListItem
  {
  public:
    AWS_OMICS_API RunGroupListItem();
    AWS_OMICS_API RunGroupListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunGroupListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The group's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The group's ARN.</p>
     */
    inline RunGroupListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The group's ARN.</p>
     */
    inline RunGroupListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The group's ARN.</p>
     */
    inline RunGroupListItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the group was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the group was created.</p>
     */
    inline RunGroupListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the group was created.</p>
     */
    inline RunGroupListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The group's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The group's ID.</p>
     */
    inline RunGroupListItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline RunGroupListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline RunGroupListItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The group's maximum CPU count setting.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }

    /**
     * <p>The group's maximum CPU count setting.</p>
     */
    inline bool MaxCpusHasBeenSet() const { return m_maxCpusHasBeenSet; }

    /**
     * <p>The group's maximum CPU count setting.</p>
     */
    inline void SetMaxCpus(int value) { m_maxCpusHasBeenSet = true; m_maxCpus = value; }

    /**
     * <p>The group's maximum CPU count setting.</p>
     */
    inline RunGroupListItem& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}


    /**
     * <p>The group's maximum duration setting.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }

    /**
     * <p>The group's maximum duration setting.</p>
     */
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }

    /**
     * <p>The group's maximum duration setting.</p>
     */
    inline void SetMaxDuration(int value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }

    /**
     * <p>The group's maximum duration setting.</p>
     */
    inline RunGroupListItem& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}


    /**
     * <p>The group's maximum concurrent run setting.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }

    /**
     * <p>The group's maximum concurrent run setting.</p>
     */
    inline bool MaxRunsHasBeenSet() const { return m_maxRunsHasBeenSet; }

    /**
     * <p>The group's maximum concurrent run setting.</p>
     */
    inline void SetMaxRuns(int value) { m_maxRunsHasBeenSet = true; m_maxRuns = value; }

    /**
     * <p>The group's maximum concurrent run setting.</p>
     */
    inline RunGroupListItem& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}


    /**
     * <p>The group's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The group's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The group's name.</p>
     */
    inline RunGroupListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The group's name.</p>
     */
    inline RunGroupListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The group's name.</p>
     */
    inline RunGroupListItem& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_maxCpus;
    bool m_maxCpusHasBeenSet = false;

    int m_maxDuration;
    bool m_maxDurationHasBeenSet = false;

    int m_maxRuns;
    bool m_maxRunsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
