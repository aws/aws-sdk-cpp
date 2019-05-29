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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API UntagResourceRequest : public IoTThingsGraphRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags are to be
     * removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag key names to remove from the resource. You don't specify the
     * value. Both the key and its associated value are removed. </p> <p>This parameter
     * to the API requires a JSON text string argument. For information on how to
     * format a JSON parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
