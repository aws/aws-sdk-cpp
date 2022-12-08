/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/RegistryId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListSchemasRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchemas"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline const RegistryId& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetRegistryId(const RegistryId& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetRegistryId(RegistryId&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline ListSchemasRequest& WithRegistryId(const RegistryId& value) { SetRegistryId(value); return *this;}

    /**
     * <p>A wrapper structure that may contain the registry name and Amazon Resource
     * Name (ARN).</p>
     */
    inline ListSchemasRequest& WithRegistryId(RegistryId&& value) { SetRegistryId(std::move(value)); return *this;}


    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results required per page. If the value is not supplied,
     * this will be defaulted to 25 per page.</p>
     */
    inline ListSchemasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    RegistryId m_registryId;
    bool m_registryIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
