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
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Item in a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointListItem">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API DataflowEndpointListItem
  {
  public:
    DataflowEndpointListItem();
    DataflowEndpointListItem(Aws::Utils::Json::JsonView jsonValue);
    DataflowEndpointListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const{ return m_dataflowEndpointGroupArn; }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline bool DataflowEndpointGroupArnHasBeenSet() const { return m_dataflowEndpointGroupArnHasBeenSet; }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(const Aws::String& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = value; }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(Aws::String&& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = std::move(value); }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(const char* value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn.assign(value); }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(const Aws::String& value) { SetDataflowEndpointGroupArn(value); return *this;}

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(Aws::String&& value) { SetDataflowEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(const char* value) { SetDataflowEndpointGroupArn(value); return *this;}


    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const{ return m_dataflowEndpointGroupId; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline bool DataflowEndpointGroupIdHasBeenSet() const { return m_dataflowEndpointGroupIdHasBeenSet; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const Aws::String& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = value; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(Aws::String&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::move(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const char* value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId.assign(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}

  private:

    Aws::String m_dataflowEndpointGroupArn;
    bool m_dataflowEndpointGroupArnHasBeenSet;

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
