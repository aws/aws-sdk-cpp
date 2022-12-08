/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class UpdateRunGroupRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateRunGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRunGroup"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


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
    inline UpdateRunGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline UpdateRunGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline UpdateRunGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The maximum number of CPUs to use.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }

    /**
     * <p>The maximum number of CPUs to use.</p>
     */
    inline bool MaxCpusHasBeenSet() const { return m_maxCpusHasBeenSet; }

    /**
     * <p>The maximum number of CPUs to use.</p>
     */
    inline void SetMaxCpus(int value) { m_maxCpusHasBeenSet = true; m_maxCpus = value; }

    /**
     * <p>The maximum number of CPUs to use.</p>
     */
    inline UpdateRunGroupRequest& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}


    /**
     * <p>The maximum amount of time to run.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }

    /**
     * <p>The maximum amount of time to run.</p>
     */
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }

    /**
     * <p>The maximum amount of time to run.</p>
     */
    inline void SetMaxDuration(int value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }

    /**
     * <p>The maximum amount of time to run.</p>
     */
    inline UpdateRunGroupRequest& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}


    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline bool MaxRunsHasBeenSet() const { return m_maxRunsHasBeenSet; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline void SetMaxRuns(int value) { m_maxRunsHasBeenSet = true; m_maxRuns = value; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline UpdateRunGroupRequest& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}


    /**
     * <p>A name for the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the group.</p>
     */
    inline UpdateRunGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the group.</p>
     */
    inline UpdateRunGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the group.</p>
     */
    inline UpdateRunGroupRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

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
