/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListAliasesResult
  {
  public:
    AWS_SAGEMAKER_API ListAliasesResult();
    AWS_SAGEMAKER_API ListAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSageMakerImageVersionAliases() const{ return m_sageMakerImageVersionAliases; }

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline void SetSageMakerImageVersionAliases(const Aws::Vector<Aws::String>& value) { m_sageMakerImageVersionAliases = value; }

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline void SetSageMakerImageVersionAliases(Aws::Vector<Aws::String>&& value) { m_sageMakerImageVersionAliases = std::move(value); }

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline ListAliasesResult& WithSageMakerImageVersionAliases(const Aws::Vector<Aws::String>& value) { SetSageMakerImageVersionAliases(value); return *this;}

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline ListAliasesResult& WithSageMakerImageVersionAliases(Aws::Vector<Aws::String>&& value) { SetSageMakerImageVersionAliases(std::move(value)); return *this;}

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline ListAliasesResult& AddSageMakerImageVersionAliases(const Aws::String& value) { m_sageMakerImageVersionAliases.push_back(value); return *this; }

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline ListAliasesResult& AddSageMakerImageVersionAliases(Aws::String&& value) { m_sageMakerImageVersionAliases.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of SageMaker image version aliases.</p>
     */
    inline ListAliasesResult& AddSageMakerImageVersionAliases(const char* value) { m_sageMakerImageVersionAliases.push_back(value); return *this; }


    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline ListAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline ListAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline ListAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_sageMakerImageVersionAliases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
