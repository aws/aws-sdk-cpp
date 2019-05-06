/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API GetDataSourceRequest : public MachineLearningRequest
  {
  public:
    GetDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataSource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline GetDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline GetDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>DataSource</code> at creation.</p>
     */
    inline GetDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>Specifies whether the <code>GetDataSource</code> operation should return
     * <code>DataSourceSchema</code>.</p> <p>If true, <code>DataSourceSchema</code> is
     * returned.</p> <p>If false, <code>DataSourceSchema</code> is not returned.</p>
     */
    inline bool GetVerbose() const{ return m_verbose; }

    /**
     * <p>Specifies whether the <code>GetDataSource</code> operation should return
     * <code>DataSourceSchema</code>.</p> <p>If true, <code>DataSourceSchema</code> is
     * returned.</p> <p>If false, <code>DataSourceSchema</code> is not returned.</p>
     */
    inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }

    /**
     * <p>Specifies whether the <code>GetDataSource</code> operation should return
     * <code>DataSourceSchema</code>.</p> <p>If true, <code>DataSourceSchema</code> is
     * returned.</p> <p>If false, <code>DataSourceSchema</code> is not returned.</p>
     */
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }

    /**
     * <p>Specifies whether the <code>GetDataSource</code> operation should return
     * <code>DataSourceSchema</code>.</p> <p>If true, <code>DataSourceSchema</code> is
     * returned.</p> <p>If false, <code>DataSourceSchema</code> is not returned.</p>
     */
    inline GetDataSourceRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    bool m_verbose;
    bool m_verboseHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
