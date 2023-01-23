/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Application.h>
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
namespace AppStream
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_APPSTREAM_API UpdateApplicationResult();
    AWS_APPSTREAM_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Application& GetApplication() const{ return m_application; }

    
    inline void SetApplication(const Application& value) { m_application = value; }

    
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    
    inline UpdateApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    
    inline UpdateApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}

  private:

    Application m_application;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
