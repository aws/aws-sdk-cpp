/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
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
namespace AppStream
{
namespace Model
{
  class AssociateAppBlockBuilderAppBlockResult
  {
  public:
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult();
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline const AppBlockBuilderAppBlockAssociation& GetAppBlockBuilderAppBlockAssociation() const{ return m_appBlockBuilderAppBlockAssociation; }

    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline void SetAppBlockBuilderAppBlockAssociation(const AppBlockBuilderAppBlockAssociation& value) { m_appBlockBuilderAppBlockAssociation = value; }

    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline void SetAppBlockBuilderAppBlockAssociation(AppBlockBuilderAppBlockAssociation&& value) { m_appBlockBuilderAppBlockAssociation = std::move(value); }

    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline AssociateAppBlockBuilderAppBlockResult& WithAppBlockBuilderAppBlockAssociation(const AppBlockBuilderAppBlockAssociation& value) { SetAppBlockBuilderAppBlockAssociation(value); return *this;}

    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline AssociateAppBlockBuilderAppBlockResult& WithAppBlockBuilderAppBlockAssociation(AppBlockBuilderAppBlockAssociation&& value) { SetAppBlockBuilderAppBlockAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateAppBlockBuilderAppBlockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateAppBlockBuilderAppBlockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateAppBlockBuilderAppBlockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppBlockBuilderAppBlockAssociation m_appBlockBuilderAppBlockAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
