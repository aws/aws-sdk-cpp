/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class CreateObjectResult
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateObjectResult();
    AWS_CLOUDDIRECTORY_API CreateObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API CreateObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = std::move(value); }

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline CreateObjectResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline CreateObjectResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier that is associated with the object.</p>
     */
    inline CreateObjectResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:

    Aws::String m_objectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
