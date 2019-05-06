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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API SwapEnvironmentCNAMEsRequest : public ElasticBeanstalkRequest
  {
  public:
    SwapEnvironmentCNAMEsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwapEnvironmentCNAMEs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline const Aws::String& GetSourceEnvironmentId() const{ return m_sourceEnvironmentId; }

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline bool SourceEnvironmentIdHasBeenSet() const { return m_sourceEnvironmentIdHasBeenSet; }

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetSourceEnvironmentId(const Aws::String& value) { m_sourceEnvironmentIdHasBeenSet = true; m_sourceEnvironmentId = value; }

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetSourceEnvironmentId(Aws::String&& value) { m_sourceEnvironmentIdHasBeenSet = true; m_sourceEnvironmentId = std::move(value); }

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetSourceEnvironmentId(const char* value) { m_sourceEnvironmentIdHasBeenSet = true; m_sourceEnvironmentId.assign(value); }

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentId(const Aws::String& value) { SetSourceEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentId(Aws::String&& value) { SetSourceEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentId</code>, you must specify the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentId(const char* value) { SetSourceEnvironmentId(value); return *this;}


    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline const Aws::String& GetSourceEnvironmentName() const{ return m_sourceEnvironmentName; }

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline bool SourceEnvironmentNameHasBeenSet() const { return m_sourceEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetSourceEnvironmentName(const Aws::String& value) { m_sourceEnvironmentNameHasBeenSet = true; m_sourceEnvironmentName = value; }

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetSourceEnvironmentName(Aws::String&& value) { m_sourceEnvironmentNameHasBeenSet = true; m_sourceEnvironmentName = std::move(value); }

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetSourceEnvironmentName(const char* value) { m_sourceEnvironmentNameHasBeenSet = true; m_sourceEnvironmentName.assign(value); }

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentName(const Aws::String& value) { SetSourceEnvironmentName(value); return *this;}

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentName(Aws::String&& value) { SetSourceEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the source environment.</p> <p> Condition: You must specify at
     * least the <code>SourceEnvironmentID</code> or the
     * <code>SourceEnvironmentName</code>. You may also specify both. If you specify
     * the <code>SourceEnvironmentName</code>, you must specify the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithSourceEnvironmentName(const char* value) { SetSourceEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline const Aws::String& GetDestinationEnvironmentId() const{ return m_destinationEnvironmentId; }

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline bool DestinationEnvironmentIdHasBeenSet() const { return m_destinationEnvironmentIdHasBeenSet; }

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetDestinationEnvironmentId(const Aws::String& value) { m_destinationEnvironmentIdHasBeenSet = true; m_destinationEnvironmentId = value; }

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetDestinationEnvironmentId(Aws::String&& value) { m_destinationEnvironmentIdHasBeenSet = true; m_destinationEnvironmentId = std::move(value); }

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline void SetDestinationEnvironmentId(const char* value) { m_destinationEnvironmentIdHasBeenSet = true; m_destinationEnvironmentId.assign(value); }

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentId(const Aws::String& value) { SetDestinationEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentId(Aws::String&& value) { SetDestinationEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the destination environment.</p> <p> Condition: You must specify at
     * least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentId</code> with the
     * <code>DestinationEnvironmentId</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentId(const char* value) { SetDestinationEnvironmentId(value); return *this;}


    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline const Aws::String& GetDestinationEnvironmentName() const{ return m_destinationEnvironmentName; }

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline bool DestinationEnvironmentNameHasBeenSet() const { return m_destinationEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetDestinationEnvironmentName(const Aws::String& value) { m_destinationEnvironmentNameHasBeenSet = true; m_destinationEnvironmentName = value; }

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetDestinationEnvironmentName(Aws::String&& value) { m_destinationEnvironmentNameHasBeenSet = true; m_destinationEnvironmentName = std::move(value); }

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline void SetDestinationEnvironmentName(const char* value) { m_destinationEnvironmentNameHasBeenSet = true; m_destinationEnvironmentName.assign(value); }

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentName(const Aws::String& value) { SetDestinationEnvironmentName(value); return *this;}

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentName(Aws::String&& value) { SetDestinationEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination environment.</p> <p> Condition: You must specify
     * at least the <code>DestinationEnvironmentID</code> or the
     * <code>DestinationEnvironmentName</code>. You may also specify both. You must
     * specify the <code>SourceEnvironmentName</code> with the
     * <code>DestinationEnvironmentName</code>. </p>
     */
    inline SwapEnvironmentCNAMEsRequest& WithDestinationEnvironmentName(const char* value) { SetDestinationEnvironmentName(value); return *this;}

  private:

    Aws::String m_sourceEnvironmentId;
    bool m_sourceEnvironmentIdHasBeenSet;

    Aws::String m_sourceEnvironmentName;
    bool m_sourceEnvironmentNameHasBeenSet;

    Aws::String m_destinationEnvironmentId;
    bool m_destinationEnvironmentIdHasBeenSet;

    Aws::String m_destinationEnvironmentName;
    bool m_destinationEnvironmentNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
