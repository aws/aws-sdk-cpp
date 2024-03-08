/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class CreateTrainingDatasetResult
  {
  public:
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult();
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateTrainingDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline CreateTrainingDatasetResult& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline CreateTrainingDatasetResult& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset resource.</p>
     */
    inline CreateTrainingDatasetResult& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTrainingDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTrainingDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTrainingDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_trainingDatasetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
