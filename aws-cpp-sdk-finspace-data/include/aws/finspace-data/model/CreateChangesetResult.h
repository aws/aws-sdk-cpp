/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/ChangesetInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{
  class AWS_FINSPACEDATA_API CreateChangesetResult
  {
  public:
    CreateChangesetResult();
    CreateChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the changeset details.</p>
     */
    inline const ChangesetInfo& GetChangeset() const{ return m_changeset; }

    /**
     * <p>Returns the changeset details.</p>
     */
    inline void SetChangeset(const ChangesetInfo& value) { m_changeset = value; }

    /**
     * <p>Returns the changeset details.</p>
     */
    inline void SetChangeset(ChangesetInfo&& value) { m_changeset = std::move(value); }

    /**
     * <p>Returns the changeset details.</p>
     */
    inline CreateChangesetResult& WithChangeset(const ChangesetInfo& value) { SetChangeset(value); return *this;}

    /**
     * <p>Returns the changeset details.</p>
     */
    inline CreateChangesetResult& WithChangeset(ChangesetInfo&& value) { SetChangeset(std::move(value)); return *this;}

  private:

    ChangesetInfo m_changeset;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
