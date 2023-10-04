/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/UserProfileDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UserProfileStatus.h>
#include <aws/datazone/model/UserProfileType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the user profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UserProfileSummary">AWS
   * API Reference</a></p>
   */
  class UserProfileSummary
  {
  public:
    AWS_DATAZONE_API UserProfileSummary();
    AWS_DATAZONE_API UserProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UserProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the user profile.</p>
     */
    inline const UserProfileDetails& GetDetails() const{ return m_details; }

    /**
     * <p>The details of the user profile.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>The details of the user profile.</p>
     */
    inline void SetDetails(const UserProfileDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the user profile.</p>
     */
    inline void SetDetails(UserProfileDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>The details of the user profile.</p>
     */
    inline UserProfileSummary& WithDetails(const UserProfileDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the user profile.</p>
     */
    inline UserProfileSummary& WithDetails(UserProfileDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline UserProfileSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline UserProfileSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain of the user profile.</p>
     */
    inline UserProfileSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the user profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline UserProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user profile.</p>
     */
    inline UserProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user profile.</p>
     */
    inline UserProfileSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the user profile.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the user profile.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the user profile.</p>
     */
    inline void SetStatus(const UserProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the user profile.</p>
     */
    inline void SetStatus(UserProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the user profile.</p>
     */
    inline UserProfileSummary& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the user profile.</p>
     */
    inline UserProfileSummary& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the user profile.</p>
     */
    inline const UserProfileType& GetType() const{ return m_type; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline void SetType(const UserProfileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline void SetType(UserProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the user profile.</p>
     */
    inline UserProfileSummary& WithType(const UserProfileType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the user profile.</p>
     */
    inline UserProfileSummary& WithType(UserProfileType&& value) { SetType(std::move(value)); return *this;}

  private:

    UserProfileDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UserProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    UserProfileType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
