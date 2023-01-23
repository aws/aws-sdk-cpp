/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{
  class CreatePlaceIndexResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult();
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreatePlaceIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline CreatePlaceIndexResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the place index resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline CreatePlaceIndexResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline CreatePlaceIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline CreatePlaceIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the place index resource. Used to specify
     * a resource across AWS. </p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place-index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline CreatePlaceIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The name for the place index resource.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name for the place index resource.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name for the place index resource.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name for the place index resource.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name for the place index resource.</p>
     */
    inline CreatePlaceIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name for the place index resource.</p>
     */
    inline CreatePlaceIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name for the place index resource.</p>
     */
    inline CreatePlaceIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_indexArn;

    Aws::String m_indexName;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
