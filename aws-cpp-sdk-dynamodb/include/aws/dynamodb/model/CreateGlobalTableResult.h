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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/GlobalTableDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API CreateGlobalTableResult
  {
  public:
    CreateGlobalTableResult();
    CreateGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGlobalTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the global table.</p>
     */
    inline const GlobalTableDescription& GetGlobalTableDescription() const{ return m_globalTableDescription; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(const GlobalTableDescription& value) { m_globalTableDescription = value; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(GlobalTableDescription&& value) { m_globalTableDescription = std::move(value); }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline CreateGlobalTableResult& WithGlobalTableDescription(const GlobalTableDescription& value) { SetGlobalTableDescription(value); return *this;}

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline CreateGlobalTableResult& WithGlobalTableDescription(GlobalTableDescription&& value) { SetGlobalTableDescription(std::move(value)); return *this;}

  private:

    GlobalTableDescription m_globalTableDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
