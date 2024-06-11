/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Returns details of a specific query. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StoredQueryMetadata">AWS
   * API Reference</a></p>
   */
  class StoredQueryMetadata
  {
  public:
    AWS_CONFIGSERVICE_API StoredQueryMetadata();
    AWS_CONFIGSERVICE_API StoredQueryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API StoredQueryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the query. </p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline StoredQueryMetadata& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline StoredQueryMetadata& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline StoredQueryMetadata& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline const Aws::String& GetQueryArn() const{ return m_queryArn; }
    inline bool QueryArnHasBeenSet() const { return m_queryArnHasBeenSet; }
    inline void SetQueryArn(const Aws::String& value) { m_queryArnHasBeenSet = true; m_queryArn = value; }
    inline void SetQueryArn(Aws::String&& value) { m_queryArnHasBeenSet = true; m_queryArn = std::move(value); }
    inline void SetQueryArn(const char* value) { m_queryArnHasBeenSet = true; m_queryArn.assign(value); }
    inline StoredQueryMetadata& WithQueryArn(const Aws::String& value) { SetQueryArn(value); return *this;}
    inline StoredQueryMetadata& WithQueryArn(Aws::String&& value) { SetQueryArn(std::move(value)); return *this;}
    inline StoredQueryMetadata& WithQueryArn(const char* value) { SetQueryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the query.</p>
     */
    inline const Aws::String& GetQueryName() const{ return m_queryName; }
    inline bool QueryNameHasBeenSet() const { return m_queryNameHasBeenSet; }
    inline void SetQueryName(const Aws::String& value) { m_queryNameHasBeenSet = true; m_queryName = value; }
    inline void SetQueryName(Aws::String&& value) { m_queryNameHasBeenSet = true; m_queryName = std::move(value); }
    inline void SetQueryName(const char* value) { m_queryNameHasBeenSet = true; m_queryName.assign(value); }
    inline StoredQueryMetadata& WithQueryName(const Aws::String& value) { SetQueryName(value); return *this;}
    inline StoredQueryMetadata& WithQueryName(Aws::String&& value) { SetQueryName(std::move(value)); return *this;}
    inline StoredQueryMetadata& WithQueryName(const char* value) { SetQueryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique description for the query.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StoredQueryMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StoredQueryMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StoredQueryMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryArn;
    bool m_queryArnHasBeenSet = false;

    Aws::String m_queryName;
    bool m_queryNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
