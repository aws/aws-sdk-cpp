/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdatePlaceIndexResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdatePlaceIndexResult();
    AWS_LOCATIONSERVICE_API UpdatePlaceIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdatePlaceIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline UpdatePlaceIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline UpdatePlaceIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the upated place index resource. Used to
     * specify a resource across AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:place- index/ExamplePlaceIndex</code> </p>
     * </li> </ul>
     */
    inline UpdatePlaceIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline UpdatePlaceIndexResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline UpdatePlaceIndexResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated place index resource.</p>
     */
    inline UpdatePlaceIndexResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdatePlaceIndexResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the place index resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdatePlaceIndexResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_indexArn;

    Aws::String m_indexName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
