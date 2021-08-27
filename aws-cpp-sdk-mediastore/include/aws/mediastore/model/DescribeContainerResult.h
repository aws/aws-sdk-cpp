/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
