/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ConflictResolvingModel.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>How the auto-merging process should resolve conflicts between different
   * profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ConflictResolution">AWS
   * API Reference</a></p>
   */
  class ConflictResolution
  {
  public:
    AWS_CUSTOMERPROFILES_API ConflictResolution();
    AWS_CUSTOMERPROFILES_API ConflictResolution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ConflictResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline const ConflictResolvingModel& GetConflictResolvingModel() const{ return m_conflictResolvingModel; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline bool ConflictResolvingModelHasBeenSet() const { return m_conflictResolvingModelHasBeenSet; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline void SetConflictResolvingModel(const ConflictResolvingModel& value) { m_conflictResolvingModelHasBeenSet = true; m_conflictResolvingModel = value; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline void SetConflictResolvingModel(ConflictResolvingModel&& value) { m_conflictResolvingModelHasBeenSet = true; m_conflictResolvingModel = std::move(value); }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline ConflictResolution& WithConflictResolvingModel(const ConflictResolvingModel& value) { SetConflictResolvingModel(value); return *this;}

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p> <ul> <li> <p> <code>RECENCY</code>: Uses the data that was most
     * recently updated.</p> </li> <li> <p> <code>SOURCE</code>: Uses the data from a
     * specific source. For example, if a company has been aquired or two departments
     * have merged, data from the specified source is used. If two duplicate profiles
     * are from the same source, then <code>RECENCY</code> is used again.</p> </li>
     * </ul>
     */
    inline ConflictResolution& WithConflictResolvingModel(ConflictResolvingModel&& value) { SetConflictResolvingModel(std::move(value)); return *this;}


    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline ConflictResolution& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline ConflictResolution& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectType</code> name that is used to resolve profile merging
     * conflicts when choosing <code>SOURCE</code> as the
     * <code>ConflictResolvingModel</code>.</p>
     */
    inline ConflictResolution& WithSourceName(const char* value) { SetSourceName(value); return *this;}

  private:

    ConflictResolvingModel m_conflictResolvingModel;
    bool m_conflictResolvingModelHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
