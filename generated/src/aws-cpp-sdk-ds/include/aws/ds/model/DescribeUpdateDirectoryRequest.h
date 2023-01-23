/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeUpdateDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdateDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline const UpdateType& GetUpdateType() const{ return m_updateType; }

    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }

    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline void SetUpdateType(const UpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }

    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline void SetUpdateType(UpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }

    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithUpdateType(const UpdateType& value) { SetUpdateType(value); return *this;}

    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithUpdateType(UpdateType&& value) { SetUpdateType(std::move(value)); return *this;}


    /**
     * <p> The name of the Region. </p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p> The name of the Region. </p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p> The name of the Region. </p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p> The name of the Region. </p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p> The name of the Region. </p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p> The name of the Region. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p> The name of the Region. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p> The name of the Region. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline DescribeUpdateDirectoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    UpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
