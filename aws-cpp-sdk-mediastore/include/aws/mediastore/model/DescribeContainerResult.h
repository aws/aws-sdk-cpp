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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/Container.h>
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
namespace MediaStore
{
namespace Model
{
  class AWS_MEDIASTORE_API DescribeContainerResult
  {
  public:
    DescribeContainerResult();
    DescribeContainerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeContainerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the queried container.</p>
     */
    inline const Container& GetContainer() const{ return m_container; }

    /**
     * <p>The name of the queried container.</p>
     */
    inline void SetContainer(const Container& value) { m_container = value; }

    /**
     * <p>The name of the queried container.</p>
     */
    inline void SetContainer(Container&& value) { m_container = std::move(value); }

    /**
     * <p>The name of the queried container.</p>
     */
    inline DescribeContainerResult& WithContainer(const Container& value) { SetContainer(value); return *this;}

    /**
     * <p>The name of the queried container.</p>
     */
    inline DescribeContainerResult& WithContainer(Container&& value) { SetContainer(std::move(value)); return *this;}

  private:

    Container m_container;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
