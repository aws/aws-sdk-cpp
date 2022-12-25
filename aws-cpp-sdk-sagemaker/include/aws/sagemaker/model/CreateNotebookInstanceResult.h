/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateNotebookInstanceResult
  {
  public:
    AWS_SAGEMAKER_API CreateNotebookInstanceResult();
    AWS_SAGEMAKER_API CreateNotebookInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateNotebookInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}

  private:

    Aws::String m_notebookInstanceArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
