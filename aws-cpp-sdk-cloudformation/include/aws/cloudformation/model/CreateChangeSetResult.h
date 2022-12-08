/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for the <a>CreateChangeSet</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSetOutput">AWS
   * API Reference</a></p>
   */
  class CreateChangeSetResult
  {
  public:
    AWS_CLOUDFORMATION_API CreateChangeSetResult();
    AWS_CLOUDFORMATION_API CreateChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API CreateChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateChangeSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateChangeSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_stackId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
